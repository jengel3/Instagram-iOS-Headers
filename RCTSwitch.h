
#import <UIKit/UISwitch.h>

@interface RCTSwitch : UISwitch {

	char _wasOn;
	/*^block*/id _onChange;

}

@property (assign,nonatomic) char wasOn;              //@synthesize wasOn=_wasOn - In the implementation block
@property (nonatomic,copy) id onChange;               //@synthesize onChange=_onChange - In the implementation block
-(id)onChange;
-(void)setOnChange:(id)arg1 ;
-(char)wasOn;
-(void)setWasOn:(char)arg1 ;
-(void)setOn:(char)arg1 animated:(char)arg2 ;
@end

