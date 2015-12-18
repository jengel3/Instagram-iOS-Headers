
#import <UIKit/UIView.h>

@interface IGDeveloperOptionsView : UIView {

	char _isSwitchingUsers;

}

@property (assign,nonatomic) char isSwitchingUsers;              //@synthesize isSwitchingUsers=_isSwitchingUsers - In the implementation block
-(char)isSwitchingUsers;
-(void)setIsSwitchingUsers:(char)arg1 ;
@end

