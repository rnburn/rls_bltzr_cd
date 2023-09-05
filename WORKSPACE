workspace(name = "rls_bltzr_cd")

load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")
load("@bazel_tools//tools/build_defs/repo:git.bzl", "git_repository")

http_archive(
    name = "rules_cuda",
    sha256 = "dc1f4f704ca56e3d5edd973f98a45f0487d0f28c689d0a57ba236112148b1833",
    strip_prefix = "rules_cuda-v0.1.2",
    urls = ["https://github.com/bazel-contrib/rules_cuda/releases/download/v0.1.2/rules_cuda-v0.1.2.tar.gz"],
)

load("@rules_cuda//cuda:repositories.bzl", "register_detected_cuda_toolchains", "rules_cuda_dependencies")
rules_cuda_dependencies()
register_detected_cuda_toolchains()

git_repository(
    name = "com_github_catchorg_catch2",
    commit = "6f21a3609cea360846a0ca93be55877cca14c86d",
    remote = "https://github.com/catchorg/Catch2",
)
