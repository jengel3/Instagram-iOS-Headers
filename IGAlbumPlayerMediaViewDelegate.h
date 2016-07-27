

@protocol IGAlbumPlayerMediaViewDelegate <NSObject>
@required
-(void)albumPlayerMediaViewDidPlayToEnd:(id)arg1;
-(void)albumPlayerMediaView:(id)arg1 didUpdateProgress:(float)arg2;
-(void)albumPlayerMediaViewDidLoad:(id)arg1;

@end

