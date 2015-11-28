
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class NSArray;

@interface IGDirectInboxActionView : UIView {

	NSArray* _inboxActionButtons;

}

@property (nonatomic,retain) NSArray * inboxActionButtons;              //@synthesize inboxActionButtons=_inboxActionButtons - In the implementation block
-(NSArray *)inboxActionButtons;
-(void)setInboxActionButtons:(NSArray *)arg1 ;
-(void)setInboxActions:(id)arg1 ;
-(float)fullyExtendedWidth;
-(void)setFrame:(CGRect)arg1 ;
@end

