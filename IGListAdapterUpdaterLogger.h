
#import <Instagram/IGListAdapterUpdaterDelegate.h>

@class NSString, NSArray;

@interface IGListAdapterUpdaterLogger : NSObject <IGListAdapterUpdaterDelegate> {

	NSString* _moduleName;
	NSArray* _previousSectionCounts;
	int _updateCount;

}

@property (nonatomic,readonly) NSString * moduleName;                    //@synthesize moduleName=_moduleName - In the implementation block
@property (nonatomic,copy) NSArray * previousSectionCounts;              //@synthesize previousSectionCounts=_previousSectionCounts - In the implementation block
@property (assign,nonatomic) int updateCount;                            //@synthesize updateCount=_updateCount - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithModuleName:(id)arg1 ;
-(void)setPreviousSectionCounts:(NSArray *)arg1 ;
-(NSArray *)previousSectionCounts;
-(void)listAdapterUpdater:(id)arg1 willPerformBatchUpdatesWithCollectionView:(id)arg2 ;
-(void)listAdapterUpdater:(id)arg1 didPerformBatchUpdates:(id)arg2 withCollectionView:(id)arg3 ;
-(void)listAdapterUpdater:(id)arg1 willInsertIndexPaths:(id)arg2 collectionView:(id)arg3 ;
-(void)listAdapterUpdater:(id)arg1 willDeleteIndexPaths:(id)arg2 collectionView:(id)arg3 ;
-(void)listAdapterUpdater:(id)arg1 willReloadIndexPaths:(id)arg2 collectionView:(id)arg3 ;
-(void)listAdapterUpdater:(id)arg1 willReloadSections:(id)arg2 collectionView:(id)arg3 ;
-(void)listAdapterUpdater:(id)arg1 willReloadDataWithCollectionView:(id)arg2 ;
-(void)listAdapterUpdater:(id)arg1 didReloadDataWithCollectionView:(id)arg2 ;
-(void)listAdapterUpdater:(id)arg1 willCrashWithException:(id)arg2 fromItems:(id)arg3 toItems:(id)arg4 updates:(id)arg5 ;
-(NSString *)moduleName;
-(void)setUpdateCount:(int)arg1 ;
-(int)updateCount;
@end

