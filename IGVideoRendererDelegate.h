

@protocol IGVideoRendererDelegate <NSObject>
@required
-(void)videoRenderer:(id)arg1 didFailWithError:(id)arg2;
-(void)videoRenderer:(id)arg1 didFinishRenderingVideoToURL:(id)arg2 videoSize:(CGSize)arg3 canceled:(char)arg4;

@end

