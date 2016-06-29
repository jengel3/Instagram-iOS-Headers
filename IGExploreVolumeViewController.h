
#import <Instagram/IGScrollingHeaderItemDelegate.h>

@class IGScrollingHeaderItem, NSString;

@interface IGExploreVolumeViewController : NSObject <IGScrollingHeaderItemDelegate> {

	char _didObserveHeaderBecomeFullyVisible;
	char _viewIsVisible;
	IGScrollingHeaderItem* _headerItem;

}

@property (nonatomic,readonly) IGScrollingHeaderItem * headerItem;                 //@synthesize headerItem=_headerItem - In the implementation block
@property (assign,nonatomic) char didObserveHeaderBecomeFullyVisible;              //@synthesize didObserveHeaderBecomeFullyVisible=_didObserveHeaderBecomeFullyVisible - In the implementation block
@property (assign,nonatomic) char viewIsVisible;                                   //@synthesize viewIsVisible=_viewIsVisible - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)isHeaderFullyVisible;
-(void)setDidObserveHeaderBecomeFullyVisible:(char)arg1 ;
-(void)updateVolumeView;
-(char)didObserveHeaderBecomeFullyVisible;
-(id)initWithScrollingHeaderItem:(id)arg1 ;
-(void)updateForViewControllerBecomeVisible:(char)arg1 ;
-(void)headerItemScrolledStateDidChange:(id)arg1 ;
-(void)setViewIsVisible:(char)arg1 ;
-(char)viewIsVisible;
-(IGScrollingHeaderItem *)headerItem;
@end

