/* Generated by RuntimeBrowser.
 */

@protocol AVVideoCompositing <NSObject>

@required

- (void)renderContextChanged:(AVVideoCompositionRenderContext *)arg1;
- (NSDictionary *)requiredPixelBufferAttributesForRenderContext;
- (NSDictionary *)sourcePixelBufferAttributes;
- (void)startVideoCompositionRequest:(AVAsynchronousVideoCompositionRequest *)arg1;

@optional

- (void)cancelAllPendingVideoCompositionRequests;
- (bool)supportsWideColorSourceFrames;

@end
