
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionViewLayout.h>

@protocol IGListVerticalLayoutDataSource, IGListVerticalLayoutEstimatingDataSource;
@class IGListVerticalLayoutCache, NSIndexSet;

@interface IGListVerticalLayout : UICollectionViewLayout {

	char _dataSourceDidChange;
	id<IGListVerticalLayoutDataSource> _dataSource;
	id<IGListVerticalLayoutEstimatingDataSource> _estimatingDataSource;
	unsigned _scrollState;
	IGListVerticalLayoutCache* _cache;
	NSIndexSet* _visibleSections;

}

@property (assign,nonatomic,__weak) id<IGListVerticalLayoutDataSource> dataSource;                                  //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) id<IGListVerticalLayoutEstimatingDataSource> estimatingDataSource;              //@synthesize estimatingDataSource=_estimatingDataSource - In the implementation block
@property (assign,nonatomic) unsigned scrollState;                                                                  //@synthesize scrollState=_scrollState - In the implementation block
@property (nonatomic,readonly) IGListVerticalLayoutCache * cache;                                                   //@synthesize cache=_cache - In the implementation block
@property (nonatomic,copy) NSIndexSet * visibleSections;                                                            //@synthesize visibleSections=_visibleSections - In the implementation block
@property (assign,nonatomic) char dataSourceDidChange;                                                              //@synthesize dataSourceDidChange=_dataSourceDidChange - In the implementation block
+(Class)invalidationContextClass;
+(Class)layoutAttributesClass;
-(id)initWithDataSource:(id)arg1 estimatingDataSource:(id)arg2 layoutCache:(id)arg3 ;
-(id<IGListVerticalLayoutEstimatingDataSource>)estimatingDataSource;
-(NSIndexSet *)visibleSections;
-(unsigned)scrollState;
-(void)setDataSourceDidChange:(char)arg1 ;
-(char)dataSourceDidChange;
-(void)prepareAllAttributes;
-(id)computeOrRetrieveSupplementaryViewAttributesAtIndexPath:(id)arg1 forKind:(id)arg2 estimated:(char)arg3 ;
-(char)isEmptySection:(int)arg1 ;
-(id)computeOrRetrieveItemAttributesAtIndexPath:(id)arg1 estimated:(char)arg2 ;
-(void)enumerateAllIndexPathsUsingBlock:(/*^block*/id)arg1 ;
-(id)lastIndexPath;
-(void)setScrollState:(unsigned)arg1 ;
-(void)configureHeaderAttributes:(id)arg1 estimated:(char)arg2 shouldQuerySize:(char)arg3 ;
-(void)configureItemAttributes:(id)arg1 estimated:(char)arg2 ;
-(void)setVisibleSections:(NSIndexSet *)arg1 ;
-(void)reconfigureAttributesInSection:(unsigned)arg1 ;
-(id)indexPathsFromUpdateItems:(id)arg1 ;
-(id)attributesAboveItemIndexPath:(id)arg1 estimated:(char)arg2 ;
-(int)lastItemIndexInSection:(int)arg1 ;
-(id)attributesAboveHeaderIndexPath:(id)arg1 estimated:(char)arg2 ;
-(void)setEstimatingDataSource:(id<IGListVerticalLayoutEstimatingDataSource>)arg1 ;
-(void)setDataSource:(id<IGListVerticalLayoutDataSource>)arg1 ;
-(id)init;
-(id)description;
-(id<IGListVerticalLayoutDataSource>)dataSource;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(CGSize)collectionViewContentSize;
-(IGListVerticalLayoutCache *)cache;
-(id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(void)prepareLayout;
-(void)invalidateLayoutWithContext:(id)arg1 ;
-(char)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1 ;
-(void)prepareForCollectionViewUpdates:(id)arg1 ;
@end

