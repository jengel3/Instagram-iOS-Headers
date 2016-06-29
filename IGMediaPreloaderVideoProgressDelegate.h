

@protocol IGMediaPreloaderVideoProgressDelegate <NSObject>
@required
-(void)mediaPreloader:(id)arg1 didLoadVideoForItem:(id)arg2 url:(id)arg3;
-(void)mediaPreloader:(id)arg1 didFailVideoForItem:(id)arg2 url:(id)arg3;

@end

