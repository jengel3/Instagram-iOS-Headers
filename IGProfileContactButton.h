
#import <Instagram/IGSpringButton.h>

@interface IGProfileContactButton : IGSpringButton {

	unsigned _buttonState;

}

@property (nonatomic,readonly) unsigned buttonState;              //@synthesize buttonState=_buttonState - In the implementation block
+(unsigned)contactButtonStateForUser:(char)arg1 business:(char)arg2 friend:(char)arg3 experiment:(id)arg4 ;
-(unsigned)buttonState;
-(id)initWithState:(unsigned)arg1 ;
@end

