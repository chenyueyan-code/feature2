module.exports = {
  extends: ['alloy', 'alloy/react', 'alloy/typescript'],
  env: {
    jest: true,
  },
  plugins: ['react-hooks', 'monorepo-cop'],
  rules: {
    '@typescript-eslint/no-invalid-this': 'off',
    'no-useless-constructor': 'off',
    '@typescript-eslint/triple-slash-reference': 'off',
    'no-unused-expressions': 'off',
    'react-hooks/rules-of-hooks': 'error',
    'react-hooks/exhaustive-deps': 'warn',
    'no-undefined': 'off', // alloy config misusing
    'prefer-const': [
      'error',
      {
        destructuring: 'any',
        ignoreReadBeforeAssign: false,
      },
    ],
    // Allow TS triple slash - https://github.com/typescript-eslint/typescript-eslint/issues/600#issuecomment-499979248
    'spaced-comment': ['error', 'always', { markers: ['/'] }],
    '@typescript-eslint/explicit-member-accessibility': 'off',
    '@typescript-eslint/no-var-requires': 'off',
    '@typescript-eslint/no-parameter-properties': 'off',
    'monorepo-cop/no-relative-import-outside-package': 'error',
    'monorepo-cop/no-disable-monorepo-no-relative-rule': 'error',
  },
  settings: {
    react: {
      version: 'detect',
    },
  },
}
