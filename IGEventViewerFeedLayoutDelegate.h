

@protocol IGEventViewerFeedLayoutDelegate <NSObject>
@required
-(CGSize*)eventViewerFeedLayout:(id)arg1 sizeForItemAtIndexPath:(id)arg2 inCollectionView:(id)arg3;
-(void)eventViewerFeedLayoutDidReachMaximumContentOffset:(id)arg1;

@end

