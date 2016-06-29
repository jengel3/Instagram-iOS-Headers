

@protocol IGExplorePhotoMapDataSourceDelegate <NSObject>
@required
-(void)onQuadtreeReceived:(id)arg1 isRefresh:(char)arg2;
-(void)onQuadtreeRequestFailed:(id)arg1;

@end

