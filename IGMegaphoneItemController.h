
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGListItemController.h>
#import <Instagram/IGMegaphonePresenterDelegate.h>
#import <Instagram/IGListDisplayDelegate.h>
#import <Instagram/IGListItemType.h>

@protocol IGMegaphoneItemControllerDelegate, IGMegaphonePresenterProtocol;
@class IGGenericMegaphone, UIView, NSString;

@interface IGMegaphoneItemController : IGListItemController <IGMegaphonePresenterDelegate, IGListDisplayDelegate, IGListItemType> {

	id<IGMegaphoneItemControllerDelegate> _delegate;
	IGGenericMegaphone* _megaphone;
	unsigned _displaySource;
	id<IGMegaphonePresenterProtocol> _presenter;
	UIView* _megaphoneView;

}

@property (nonatomic,readonly) IGGenericMegaphone * megaphone;                                   //@synthesize megaphone=_megaphone - In the implementation block
@property (nonatomic,readonly) unsigned displaySource;                                           //@synthesize displaySource=_displaySource - In the implementation block
@property (nonatomic,readonly) id<IGMegaphonePresenterProtocol> presenter;                       //@synthesize presenter=_presenter - In the implementation block
@property (nonatomic,readonly) UIView * megaphoneView;                                           //@synthesize megaphoneView=_megaphoneView - In the implementation block
@property (assign,nonatomic,__weak) id<IGMegaphoneItemControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)cellForItemAtIndex:(int)arg1 ;
-(void)didUpdateToItem:(id)arg1 ;
-(IGGenericMegaphone *)megaphone;
-(id)initWithDisplaySource:(unsigned)arg1 ;
-(void)megaphonePresenterDidDismiss:(id)arg1 ;
-(void)megaphonePresenterNeedsMegaphoneResize:(id)arg1 ;
-(void)listAdapter:(id)arg1 willDisplayListItemController:(id)arg2 ;
-(void)listAdapter:(id)arg1 didEndDisplayingListItemController:(id)arg2 ;
-(void)listAdapter:(id)arg1 willDisplayListItemController:(id)arg2 cell:(id)arg3 atIndex:(int)arg4 ;
-(void)listAdapter:(id)arg1 didEndDisplayingListItemController:(id)arg2 cell:(id)arg3 atIndex:(int)arg4 ;
-(void)listAdapter:(id)arg1 didScrollListItemController:(id)arg2 ;
-(unsigned)displaySource;
-(void)megaphonePresenter:(id)arg1 pushViewController:(id)arg2 ;
-(void)megaphonePresenterPopViewController:(id)arg1 ;
-(void)megaphonePresenter:(id)arg1 presentViewController:(id)arg2 animated:(char)arg3 completion:(/*^block*/id)arg4 ;
-(void)megaphonePresenter:(id)arg1 handleURL:(id)arg2 ;
-(void)megaphonePresenter:(id)arg1 handleButton:(id)arg2 ;
-(UIView *)megaphoneView;
-(void)setDelegate:(id<IGMegaphoneItemControllerDelegate>)arg1 ;
-(id<IGMegaphoneItemControllerDelegate>)delegate;
-(unsigned)numberOfItems;
-(void)didSelectItemAtIndex:(int)arg1 ;
-(id<IGMegaphonePresenterProtocol>)presenter;
-(CGSize)sizeForItemAtIndex:(int)arg1 ;
@end

