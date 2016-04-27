
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGListItemController.h>
#import <Instagram/IGMegaphonePresenterDelegate.h>
#import <Instagram/IGListItemType.h>

@protocol IGMegaphoneItemControllerDelegate, IGFeedMegaphoneProvider, IGMegaphonePresenterProtocol;
@class IGGenericMegaphone, UIView, NSString;

@interface IGMegaphoneItemController : IGListItemController <IGMegaphonePresenterDelegate, IGListItemType> {

	id<IGMegaphoneItemControllerDelegate> _delegate;
	unsigned _displaySource;
	id<IGFeedMegaphoneProvider> _provider;
	IGGenericMegaphone* _megaphone;
	id<IGMegaphonePresenterProtocol> _presenter;
	UIView* _megaphoneView;

}

@property (assign,nonatomic,__weak) id<IGMegaphoneItemControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) unsigned displaySource;                                           //@synthesize displaySource=_displaySource - In the implementation block
@property (nonatomic,readonly) id<IGFeedMegaphoneProvider> provider;                             //@synthesize provider=_provider - In the implementation block
@property (nonatomic,readonly) IGGenericMegaphone * megaphone;                                   //@synthesize megaphone=_megaphone - In the implementation block
@property (nonatomic,readonly) id<IGMegaphonePresenterProtocol> presenter;                       //@synthesize presenter=_presenter - In the implementation block
@property (nonatomic,readonly) UIView * megaphoneView;                                           //@synthesize megaphoneView=_megaphoneView - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)displayDelegate;
-(id)supplementaryViewSource;
-(CGSize)estimatedSizeForItemAtIndex:(int)arg1 ;
-(void)didUpdateToItem:(id)arg1 ;
-(id)cellClasses;
-(id)cellForItemAtIndex:(int)arg1 ;
-(id)initWithDisplaySource:(unsigned)arg1 ;
-(UIView *)megaphoneView;
-(IGGenericMegaphone *)megaphone;
-(unsigned)displaySource;
-(void)megaphonePresenterDidDismiss:(id)arg1 ;
-(void)megaphonePresenter:(id)arg1 pushViewController:(id)arg2 ;
-(void)megaphonePresenterPopViewController:(id)arg1 ;
-(void)megaphonePresenter:(id)arg1 presentViewController:(id)arg2 animated:(char)arg3 completion:(/*^block*/id)arg4 ;
-(void)megaphonePresenter:(id)arg1 handleURL:(id)arg2 ;
-(void)megaphonePresenterNeedsMegaphoneResize:(id)arg1 ;
-(void)setDelegate:(id<IGMegaphoneItemControllerDelegate>)arg1 ;
-(id<IGMegaphoneItemControllerDelegate>)delegate;
-(unsigned)numberOfItems;
-(void)didSelectItemAtIndex:(int)arg1 ;
-(id<IGMegaphonePresenterProtocol>)presenter;
-(id<IGFeedMegaphoneProvider>)provider;
-(CGSize)sizeForItemAtIndex:(int)arg1 ;
@end

