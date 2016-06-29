

@protocol IGFeedScrollViewListener <NSObject>
@required
-(void)scrollViewDidEndDragging:(id)arg1;
-(void)scrollViewDidEndScrolling:(id)arg1;
-(void)scrollViewWillScrollNearBottom:(id)arg1;
-(void)scrollViewWillScrollNearTop:(id)arg1;
-(void)scrollViewDidScroll:(id)arg1;
-(void)scrollViewWillBeginDragging:(id)arg1;

@end

