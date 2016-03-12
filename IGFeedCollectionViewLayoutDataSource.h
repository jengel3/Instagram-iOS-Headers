
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGCollectionViewLayoutDataSource.h>

@protocol IGCollectionViewControllerDataSource;
@class IGCollectionViewController, NSString;

@interface IGFeedCollectionViewLayoutDataSource : NSObject <IGCollectionViewLayoutDataSource> {

	id<IGCollectionViewControllerDataSource> _dataSource;
	IGCollectionViewController* _collectionViewController;

}

@property (nonatomic,__weak,readonly) id<IGCollectionViewControllerDataSource> dataSource;                //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,__weak,readonly) IGCollectionViewController * collectionViewController;              //@synthesize collectionViewController=_collectionViewController - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)collectionViewLayout:(id)arg1 prepareContext:(id)arg2 forObjects:(id)arg3 ;
-(int)numberOfSectionsForCollectionViewLayout:(id)arg1 withObjects:(id)arg2 context:(id)arg3 ;
-(int)collectionViewLayout:(id)arg1 numberOfItemsInSection:(int)arg2 withObjects:(id)arg3 context:(id)arg4 ;
-(CGSize)collectionViewLayout:(id)arg1 sizeForItemAtIndexPath:(id)arg2 withViewWidth:(float)arg3 withObjects:(id)arg4 context:(id)arg5 ;
-(id)collectionViewLayout:(id)arg1 changeSetFromObjects:(id)arg2 fromContext:(id)arg3 toObjects:(id)arg4 toContext:(id)arg5 ;
-(id)initWithDataSource:(id)arg1 collectionViewController:(id)arg2 ;
-(id<IGCollectionViewControllerDataSource>)dataSource;
-(IGCollectionViewController *)collectionViewController;
-(CGPoint)targetContentOffsetForProposedContentOffset:(CGPoint)arg1 withScrollingVelocity:(CGPoint)arg2 ;
@end

