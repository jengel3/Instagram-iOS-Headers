

@protocol IGNavigationContext, IGPresentationContext, IGListCollectionContext;
#import <Instagram/Instagram-Structs.h>
@interface IGListItemController : NSObject {

	id<IGNavigationContext> _navigationContext;
	id<IGPresentationContext> _presentationContext;
	id<IGListCollectionContext> _collectionContext;
	float _minimumLineSpacing;
	float _minimumInteritemSpacing;
	UIEdgeInsets _inset;

}

@property (assign,nonatomic,__weak) id<IGNavigationContext> navigationContext;                  //@synthesize navigationContext=_navigationContext - In the implementation block
@property (assign,nonatomic,__weak) id<IGPresentationContext> presentationContext;              //@synthesize presentationContext=_presentationContext - In the implementation block
@property (assign,nonatomic,__weak) id<IGListCollectionContext> collectionContext;              //@synthesize collectionContext=_collectionContext - In the implementation block
@property (assign,nonatomic) UIEdgeInsets inset;                                                //@synthesize inset=_inset - In the implementation block
@property (assign,nonatomic) float minimumLineSpacing;                                          //@synthesize minimumLineSpacing=_minimumLineSpacing - In the implementation block
@property (assign,nonatomic) float minimumInteritemSpacing;                                     //@synthesize minimumInteritemSpacing=_minimumInteritemSpacing - In the implementation block
-(id<IGListCollectionContext>)collectionContext;
-(id<IGNavigationContext>)navigationContext;
-(id<IGPresentationContext>)presentationContext;
-(void)setNavigationContext:(id<IGNavigationContext>)arg1 ;
-(void)setPresentationContext:(id<IGPresentationContext>)arg1 ;
-(void)setCollectionContext:(id<IGListCollectionContext>)arg1 ;
-(void)setInset:(UIEdgeInsets)arg1 ;
-(id)init;
-(void)setMinimumInteritemSpacing:(float)arg1 ;
-(void)setMinimumLineSpacing:(float)arg1 ;
-(float)minimumLineSpacing;
-(float)minimumInteritemSpacing;
-(UIEdgeInsets)inset;
@end

