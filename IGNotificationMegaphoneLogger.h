
#import <Instagram/IGGenericMegaphoneLogger.h>

@interface IGNotificationMegaphoneLogger : NSObject <IGGenericMegaphoneLogger> {

	char _seen;
	unsigned _displaySource;

}

@property (nonatomic,readonly) unsigned displaySource;              //@synthesize displaySource=_displaySource - In the implementation block
@property (assign,nonatomic) char seen;                             //@synthesize seen=_seen - In the implementation block
-(char)seen;
-(id)initWithDisplaySource:(unsigned)arg1 ;
-(void)logMegaphoneWasSeen:(id)arg1 ;
-(void)setSeen:(char)arg1 ;
-(unsigned)displaySource;
-(void)logMegaphoneButtonTapped:(id)arg1 withReason:(id)arg2 ;
-(void)logMegaphone:(id)arg1 tappingButton:(id)arg2 ;
-(void)logMegaphoneDismissed:(id)arg1 ;
-(void)logMegaphoneButtonTapped:(id)arg1 ;
-(void)logEvent:(id)arg1 ;
@end

