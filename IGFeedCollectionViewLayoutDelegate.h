

@protocol IGFeedCollectionViewLayoutDelegate <NSObject>
@optional
-(char)feedViewLayout:(id)arg1 shouldHideHeaderForSection:(unsigned)arg2 withObjects:(id)arg3;
-(char)feedViewLayout:(id)arg1 shouldBringNonHeaderItemToFrontForIndexPath:(id)arg2;

@end

