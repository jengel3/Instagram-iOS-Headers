

@protocol IGMediaPreloaderPhotoProgressDelegate <NSObject>
@required
-(void)mediaPreloader:(id)arg1 didLoadPhotoForItem:(id)arg2 url:(id)arg3;
-(void)mediaPreloader:(id)arg1 didFailPhotoForItem:(id)arg2 url:(id)arg3;

@end

