

@protocol IGVideoRendererDelegate <NSObject>
@required
-(void)videoRenderer:(id)arg1 didFinishRenderingVideoToURL:(id)arg2 videoSize:(CGSize)arg3 metadata:(id)arg4 canceled:(char)arg5;
-(void)videoRenderer:(id)arg1 didFailWithError:(id)arg2;

@end

