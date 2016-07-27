

@protocol IGPendingAlbumItemStatusDelegate <NSObject>
@required
-(void)pendingItemObserver:(id)arg1 didUpdateToStatus:(int)arg2;
-(void)pendingItemObserver:(id)arg1 didUpdateToProgress:(float)arg2;

@end

