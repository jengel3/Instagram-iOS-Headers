

@protocol IGListCollectionContext, IGListSupplementaryViewSource, IGListDisplayDelegate, IGListWorkingRangeDelegate;
#import <Instagram/Instagram-Structs.h>
@class UIViewController;

@interface IGListItemController : NSObject {

	UIViewController* _viewController;
	id<IGListCollectionContext> _collectionContext;
	float _minimumLineSpacing;
	float _minimumInteritemSpacing;
	id<IGListSupplementaryViewSource> _supplementaryViewSource;
	id<IGListDisplayDelegate> _displayDelegate;
	id<IGListWorkingRangeDelegate> _workingRangeDelegate;
	UIEdgeInsets _inset;

}

@property (assign,nonatomic,__weak) UIViewController * viewController;                                      //@synthesize viewController=_viewController - In the implementation block
@property (assign,nonatomic,__weak) id<IGListCollectionContext> collectionContext;                          //@synthesize collectionContext=_collectionContext - In the implementation block
@property (assign,nonatomic) UIEdgeInsets inset;                                                            //@synthesize inset=_inset - In the implementation block
@property (assign,nonatomic) float minimumLineSpacing;                                                      //@synthesize minimumLineSpacing=_minimumLineSpacing - In the implementation block
@property (assign,nonatomic) float minimumInteritemSpacing;                                                 //@synthesize minimumInteritemSpacing=_minimumInteritemSpacing - In the implementation block
@property (assign,nonatomic,__weak) id<IGListSupplementaryViewSource> supplementaryViewSource;              //@synthesize supplementaryViewSource=_supplementaryViewSource - In the implementation block
@property (assign,nonatomic,__weak) id<IGListDisplayDelegate> displayDelegate;                              //@synthesize displayDelegate=_displayDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<IGListWorkingRangeDelegate> workingRangeDelegate;                    //@synthesize workingRangeDelegate=_workingRangeDelegate - In the implementation block
-(id<IGListDisplayDelegate>)displayDelegate;
-(id<IGListCollectionContext>)collectionContext;
-(void)setCollectionContext:(id<IGListCollectionContext>)arg1 ;
-(id<IGListSupplementaryViewSource>)supplementaryViewSource;
-(void)setSupplementaryViewSource:(id<IGListSupplementaryViewSource>)arg1 ;
-(void)setDisplayDelegate:(id<IGListDisplayDelegate>)arg1 ;
-(id<IGListWorkingRangeDelegate>)workingRangeDelegate;
-(void)setWorkingRangeDelegate:(id<IGListWorkingRangeDelegate>)arg1 ;
-(void)setInset:(UIEdgeInsets)arg1 ;
-(id)init;
-(void)setMinimumInteritemSpacing:(float)arg1 ;
-(void)setMinimumLineSpacing:(float)arg1 ;
-(float)minimumLineSpacing;
-(float)minimumInteritemSpacing;
-(void)setViewController:(UIViewController *)arg1 ;
-(UIViewController *)viewController;
-(UIEdgeInsets)inset;
@end

