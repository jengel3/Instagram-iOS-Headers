
#import <Instagram/IGHybridWebViewConfig.h>

@class IGHybridWebViewHeaderItem;

@interface IGHybridWebViewConfigPaymentCreation : NSObject <IGHybridWebViewConfig>

@property (nonatomic,readonly) IGHybridWebViewHeaderItem * initialHeaderItem; 
@property (nonatomic,readonly) char isPopover; 
@property (nonatomic,readonly) char prefersStatusBarHidden; 
@property (nonatomic,readonly) unsigned interfaceType; 
@property (nonatomic,readonly) char shouldAllowScroll; 
-(char)shouldAllowScroll;
-(IGHybridWebViewHeaderItem *)initialHeaderItem;
-(id)headerColor;
-(char)isPopover;
-(char)prefersStatusBarHidden;
-(unsigned)interfaceType;
@end

