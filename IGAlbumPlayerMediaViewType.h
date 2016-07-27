

@protocol IGAlbumPlayerMediaViewType <NSObject>
@required
-(char)isViewFinishedLoading;
-(void)configureWithItem:(id)arg1 delegate:(id)arg2;
-(void)seekToBeginning;
-(void)play;
-(id)item;
-(void)prepareForReuse;
-(void)pause;

@end

