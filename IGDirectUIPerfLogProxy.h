
#import <Instagram/IGUIPerfLoggable.h>

@class NSString;

@interface IGDirectUIPerfLogProxy : NSObject <IGUIPerfLoggable> {

	NSString* _view;
	NSString* _threadID;

}

@property (nonatomic,retain) NSString * view;                       //@synthesize view=_view - In the implementation block
@property (nonatomic,retain) NSString * threadID;                   //@synthesize threadID=_threadID - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)shouldLogEvent:(unsigned)arg1 ;
-(unsigned)lastLogEvent;
-(void)allEventsLoggedWithResult:(id)arg1 ;
-(id)initWithView:(id)arg1 threadID:(id)arg2 ;
-(void)setThreadID:(NSString *)arg1 ;
-(NSString *)view;
-(void)setView:(NSString *)arg1 ;
-(NSString *)threadID;
@end

