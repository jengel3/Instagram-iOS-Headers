

@interface IGDiscoverMorePeopleServiceConfiguration : NSObject {

	int _serviceType;

}

@property (nonatomic,readonly) int serviceType;              //@synthesize serviceType=_serviceType - In the implementation block
+(id)serviceConfigurationForType:(int)arg1 ;
-(id)friendCount;
-(id)analyticsEventName;
-(id)initWithServiceType:(int)arg1 ;
-(int)serviceType;
-(char)connected;
@end

