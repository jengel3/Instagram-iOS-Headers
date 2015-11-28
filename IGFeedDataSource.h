
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <Instagram/IGEstimatingFeedCollectionViewLayoutDelegate.h>

@protocol IGCollectionViewControllerDataSource;
@class NSArray, IGCollectionViewController, NSString;

@interface IGFeedDataSource : NSObject <UICollectionViewDataSource, IGEstimatingFeedCollectionViewLayoutDelegate> {

	NSArray* _objects;
	id _context;
	IGCollectionViewController*<IGCollectionViewControllerDataSource> _collectionViewController;
	float _headerHeight;
	NSString* _headerKind;

}

@property (nonatomic,retain) NSArray * objects;                                                                                                //@synthesize objects=_objects - In the implementation block
@property (nonatomic,retain) id context;                                                                                                       //@synthesize context=_context - In the implementation block
@property (nonatomic,__weak,readonly) IGCollectionViewController*<IGCollectionViewControllerDataSource> collectionViewController;              //@synthesize collectionViewController=_collectionViewController - In the implementation block
@property (nonatomic,readonly) float headerHeight;                                                                                             //@synthesize headerHeight=_headerHeight - In the implementation block
@property (nonatomic,readonly) NSString * headerKind;                                                                                          //@synthesize headerKind=_headerKind - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)headerKind;
-(float)estimatedHeightForASectionInCollectionView:(id)arg1 ;
-(id)kindForHeadersInCollectionView:(id)arg1 ;
-(CGSize)collectionView:(id)arg1 sizeForHeaderInSection:(int)arg2 ;
-(CGSize)collectionView:(id)arg1 sizeForItemAtIndexPath:(id)arg2 ;
-(id)initWithCollectionViewController:(id)arg1 headerHeight:(float)arg2 headerKind:(id)arg3 ;
-(NSArray *)objects;
-(int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInCollectionView:(id)arg1 ;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(id)context;
-(void)setContext:(id)arg1 ;
-(IGCollectionViewController*<IGCollectionViewControllerDataSource>)collectionViewController;
-(float)headerHeight;
-(void)setObjects:(NSArray *)arg1 ;
@end

