
#import <Instagram/IGListUpdatingDelegate.h>

@interface IGListReloadDataUpdater : NSObject <IGListUpdatingDelegate>
-(id)itemLookupPointerFunctions;
-(void)performUpdateWithCollectionView:(id)arg1 fromItems:(id)arg2 toItems:(id)arg3 animated:(char)arg4 itemTransitionBlock:(/*^block*/id)arg5 completion:(/*^block*/id)arg6 ;
-(void)reloadDataWithCollectionView:(id)arg1 itemUpdateBlock:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(void)reloadCollectionView:(id)arg1 sections:(id)arg2 ;
-(void)reloadItemsInCollectionView:(id)arg1 indexPaths:(id)arg2 ;
-(void)insertItemsIntoCollectionView:(id)arg1 indexPaths:(id)arg2 ;
-(void)deleteItemsFromCollectionView:(id)arg1 indexPaths:(id)arg2 ;
-(void)performUpdateWithCollectionView:(id)arg1 animated:(char)arg2 itemUpdates:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
-(void)synchronousReloadDataWithCollectionView:(id)arg1 ;
@end

