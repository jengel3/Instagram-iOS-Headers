
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionViewLayout.h>
#import <Instagram/IGCollectionViewLayoutAdditions.h>

@protocol IGCollectionViewLayoutDataSource, OS_dispatch_queue;
@class NSObject, NSString;

@interface IGCollectionViewLayout : UICollectionViewLayout <IGCollectionViewLayoutAdditions> {

	float _supplementaryHeaderViewHeight;
	float _headerAdjustmentAmount;
	id<IGCollectionViewLayoutDataSource> _dataSource;
	float _supplementaryFooterViewHeight;
	float _refreshHeight;
	NSObject*<OS_dispatch_queue> _layoutQueue;

}

@property (assign,nonatomic,__weak) id<IGCollectionViewLayoutDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic) float supplementaryHeaderViewHeight;                                 //@synthesize supplementaryHeaderViewHeight=_supplementaryHeaderViewHeight - In the implementation block
@property (assign,nonatomic) float supplementaryFooterViewHeight;                                 //@synthesize supplementaryFooterViewHeight=_supplementaryFooterViewHeight - In the implementation block
@property (assign,nonatomic) float refreshHeight;                                                 //@synthesize refreshHeight=_refreshHeight - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> layoutQueue;                          //@synthesize layoutQueue=_layoutQueue - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) float headerAdjustmentAmount;                                        //@synthesize headerAdjustmentAmount=_headerAdjustmentAmount - In the implementation block
+(float)defaultHeaderHeight;
-(float)headerAdjustmentAmount;
-(void)setSupplementaryHeaderViewHeight:(float)arg1 ;
-(void)setSupplementaryFooterViewHeight:(float)arg1 ;
-(float)supplementaryHeaderViewHeight;
-(float)supplementaryFooterViewHeight;
-(void)setHeaderAdjustmentAmount:(float)arg1 ;
-(void)setRefreshHeight:(float)arg1 ;
-(void)reloadWithNewObjects:(id)arg1 context:(id)arg2 oldObjects:(id)arg3 oldContext:(id)arg4 synchronous:(char)arg5 completionBlock:(/*^block*/id)arg6 ;
-(float)refreshHeight;
-(void)setDataSource:(id<IGCollectionViewLayoutDataSource>)arg1 ;
-(id)init;
-(id<IGCollectionViewLayoutDataSource>)dataSource;
-(int)numberOfItemsInSection:(int)arg1 ;
-(int)numberOfSections;
-(CGPoint)targetContentOffsetForProposedContentOffset:(CGPoint)arg1 withScrollingVelocity:(CGPoint)arg2 ;
-(NSObject*<OS_dispatch_queue>)layoutQueue;
@end

