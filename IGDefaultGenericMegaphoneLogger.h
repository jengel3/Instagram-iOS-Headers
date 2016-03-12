
#import <Instagram/IGGenericMegaphoneLogger.h>

@interface IGDefaultGenericMegaphoneLogger : NSObject <IGGenericMegaphoneLogger> {

	char _seen;
	unsigned _displaySource;

}

@property (nonatomic,readonly) unsigned displaySource;              //@synthesize displaySource=_displaySource - In the implementation block
@property (assign,nonatomic) char seen;                             //@synthesize seen=_seen - In the implementation block
-(id)initWithDisplaySource:(unsigned)arg1 ;
-(void)logMegaphoneWasSeen:(id)arg1 ;
-(unsigned)displaySource;
-(void)logMegaphoneDismissed:(id)arg1 ;
-(void)logMegaphone:(id)arg1 tappingButton:(id)arg2 ;
-(void)logMegaphoneButtonTapped:(id)arg1 ;
-(void)logForMegaphone:(id)arg1 action:(id)arg2 displaySourceString:(id)arg3 ;
-(char)seen;
-(void)setSeen:(char)arg1 ;
-(void)logForAction:(id)arg1 megaphone:(id)arg2 ;
@end

