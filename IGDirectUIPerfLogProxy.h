
#import <Instagram/IGUIPerfLoggable.h>
#import <Instagram/IGDirectMainInboxUIPerfLogging.h>

@class NSString;

@interface IGDirectUIPerfLogProxy : NSObject <IGUIPerfLoggable, IGDirectMainInboxUIPerfLogging> {

	NSString* _viewName;
	NSString* _threadId;

}

@property (nonatomic,copy,readonly) NSString * viewName;              //@synthesize viewName=_viewName - In the implementation block
@property (nonatomic,copy,readonly) NSString * threadId;              //@synthesize threadId=_threadId - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)threadLoggerWithId:(id)arg1 ;
+(id)pendingInboxLogger;
+(id)mainInboxLogger;
-(id)initWithViewName:(id)arg1 threadId:(id)arg2 ;
-(char)shouldLogEvent:(unsigned)arg1 ;
-(unsigned)lastLogEvent;
-(void)allEventsLoggedWithResult:(id)arg1 ;
-(id)logWillPushFromInboxWithLoggableControllerBlock:(/*^block*/id)arg1 ;
-(NSString *)viewName;
-(NSString *)threadId;
@end

