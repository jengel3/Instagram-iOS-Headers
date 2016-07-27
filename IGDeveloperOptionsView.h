
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@interface IGDeveloperOptionsView : UIView {

	char _isSwitchingUsers;

}

@property (assign,nonatomic) char isSwitchingUsers;              //@synthesize isSwitchingUsers=_isSwitchingUsers - In the implementation block
-(void)setIsSwitchingUsers:(char)arg1 ;
-(void)showDeveloperOptions;
-(char)isSwitchingUsers;
-(id)initWithFrame:(CGRect)arg1 isSwitchingUsers:(char)arg2 ;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2 ;
-(void)handleLongPress:(id)arg1 ;
@end

