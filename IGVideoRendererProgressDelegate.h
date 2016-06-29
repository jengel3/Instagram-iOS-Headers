

@protocol IGVideoRendererProgressDelegate <NSObject>
@required
-(void)videoRenderer:(id)arg1 didProgress:(float)arg2;
-(void)videoRenderer:(id)arg1 didFailWithError:(id)arg2;
-(void)videoRenderer:(id)arg1 didFinishRenderingVideoToURL:(id)arg2 canceled:(char)arg3;

@end

