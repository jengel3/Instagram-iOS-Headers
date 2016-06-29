

@class NSString, NSDictionary;

@interface BFMeasurementEvent : NSObject {

	NSString* _name;
	NSDictionary* _args;

}
+(void)postNotificationForEventName:(id)arg1 args:(id)arg2 ;
-(id)initEventWithName:(id)arg1 args:(id)arg2 ;
-(void)postNotification;
@end

