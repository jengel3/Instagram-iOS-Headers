

@protocol IGAlbumPlayerMediaViewDelegate <NSObject>
@required
-(void)albumPlayerMediaViewDidLoad:(id)arg1;
-(void)albumPlayerMediaViewDidPlayToEnd:(id)arg1;
-(void)albumPlayerMediaView:(id)arg1 didUpdateProgress:(float)arg2;

@end

