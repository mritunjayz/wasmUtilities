const path = require('path');


const OUTPUT_PATH = path.resolve(__dirname, 'dist');

module.exports = {
  entry: './utilities.js',
  output: {
    path: OUTPUT_PATH,
    filename: 'bundle.js',
    publicPath: '/dist/',
  },
  devtool: 'source-map',
  resolve: {
    /**
     * See https://webpack.js.org/configuration/resolve/#resolve-extensions
     *
     * ".js" included to make some Webpack plugins work.
     */
    extensions: ['.ts', '.tsx', '.js'],
    //target: 'node',

    alias: {
      img: path.join(__dirname, 'img/'),
    },
  }}