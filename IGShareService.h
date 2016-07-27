

@class NSString;

@interface IGShareService : NSObject {

	char _isAvailableForSharing;
	char _wantsToShare;
	int _serviceType;

}

@property (nonatomic,readonly) int serviceType;                               //@synthesize serviceType=_serviceType - In the implementation block
@property (nonatomic,readonly) NSString * serviceNameForService; 
@property (nonatomic,readonly) char hasAdvancedOptions; 
@property (assign,nonatomic) char isAvailableForSharing;                      //@synthesize isAvailableForSharing=_isAvailableForSharing - In the implementation block
@property (nonatomic,readonly) char isAdequatelyConfigured; 
@property (assign,nonatomic) char wantsToShare;                               //@synthesize wantsToShare=_wantsToShare - In the implementation block
@property (nonatomic,readonly) char willShare; 
+(id)serviceWithType:(int)arg1 ;
-(char)hasAdvancedOptions;
-(void)setIsAvailableForSharing:(char)arg1 ;
-(char)willShare;
-(void)setWantsToShare:(char)arg1 ;
-(char)isAvailableForSharing;
-(char)isAdequatelyConfigured;
-(char)wantsToShare;
-(NSString *)serviceNameForService;
-(id)initWithServiceType:(int)arg1 ;
-(int)serviceType;
@end

