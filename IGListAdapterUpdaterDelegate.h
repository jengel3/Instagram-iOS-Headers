

@protocol IGListAdapterUpdaterDelegate <NSObject>
@required
-(void)listAdapterUpdater:(id)arg1 willPerformBatchUpdatesWithCollectionView:(id)arg2;
-(void)listAdapterUpdater:(id)arg1 didPerformBatchUpdates:(id)arg2 withCollectionView:(id)arg3;
-(void)listAdapterUpdater:(id)arg1 willInsertIndexPaths:(id)arg2 collectionView:(id)arg3;
-(void)listAdapterUpdater:(id)arg1 willDeleteIndexPaths:(id)arg2 collectionView:(id)arg3;
-(void)listAdapterUpdater:(id)arg1 willReloadIndexPaths:(id)arg2 collectionView:(id)arg3;
-(void)listAdapterUpdater:(id)arg1 willReloadSections:(id)arg2 collectionView:(id)arg3;
-(void)listAdapterUpdater:(id)arg1 willReloadDataWithCollectionView:(id)arg2;
-(void)listAdapterUpdater:(id)arg1 didReloadDataWithCollectionView:(id)arg2;
-(void)listAdapterUpdater:(id)arg1 willCrashWithException:(id)arg2 fromItems:(id)arg3 toItems:(id)arg4 updates:(id)arg5;

@end

