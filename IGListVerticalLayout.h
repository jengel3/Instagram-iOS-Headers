
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionViewLayout.h>

@protocol IGListVerticalLayoutDataSource, IGListVerticalLayoutEstimatingDataSource;
@class IGListVerticalLayoutCache, NSIndexSet;

@interface IGListVerticalLayout : UICollectionViewLayout {

	char _isScrollingUp;
	id<IGListVerticalLayoutDataSource> _dataSource;
	id<IGListVerticalLayoutEstimatingDataSource> _estimatingDataSource;
	IGListVerticalLayoutCache* _cache;
	NSIndexSet* _visibleSections;

}

@property (assign,nonatomic,__weak) id<IGListVerticalLayoutDataSource> dataSource;                                  //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) id<IGListVerticalLayoutEstimatingDataSource> estimatingDataSource;              //@synthesize estimatingDataSource=_estimatingDataSource - In the implementation block
@property (nonatomic,readonly) IGListVerticalLayoutCache * cache;                                                   //@synthesize cache=_cache - In the implementation block
@property (nonatomic,copy) NSIndexSet * visibleSections;                                                            //@synthesize visibleSections=_visibleSections - In the implementation block
@property (assign,nonatomic) char isScrollingUp;                                                                    //@synthesize isScrollingUp=_isScrollingUp - In the implementation block
+(Class)invalidationContextClass;
+(Class)layoutAttributesClass;
-(id)initWithDataSource:(id)arg1 estimatingDataSource:(id)arg2 layoutCache:(id)arg3 ;
-(void)removeObservers;
-(void)addObservers;
-(id)lastIndexPath;
-(id)computeOrRetrieveSupplementaryViewAttributesAtIndexPath:(id)arg1 forKind:(id)arg2 estimated:(char)arg3 ;
-(id)computeOrRetrieveItemAttributesAtIndexPath:(id)arg1 estimated:(char)arg2 ;
-(void)setVisibleSections:(NSIndexSet *)arg1 ;
-(void)setIsScrollingUp:(char)arg1 ;
-(void)invalidateLayoutEstimatedAttributes;
-(id<IGListVerticalLayoutEstimatingDataSource>)estimatingDataSource;
-(id)previousAttributesForItemAtIndexPath:(id)arg1 estimated:(char)arg2 ;
-(int)lastItemIndexInSection:(int)arg1 ;
-(id)previousAttributesForHeaderAtIndexPath:(id)arg1 estimated:(char)arg2 ;
-(void)setEstimatingDataSource:(id<IGListVerticalLayoutEstimatingDataSource>)arg1 ;
-(NSIndexSet *)visibleSections;
-(char)isScrollingUp;
-(void)setDataSource:(id<IGListVerticalLayoutDataSource>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<IGListVerticalLayoutDataSource>)dataSource;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(CGSize)collectionViewContentSize;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(IGListVerticalLayoutCache *)cache;
-(id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(void)prepareLayout;
-(void)invalidateLayoutWithContext:(id)arg1 ;
-(char)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1 ;
-(void)prepareForCollectionViewUpdates:(id)arg1 ;
-(void)finalizeCollectionViewUpdates;
@end

