

@class NSString;

@interface IGFollowPeopleMegaphoneConfiguration : NSObject {

	char _isDismissable;
	char _shouldRefill;
	NSString* _title;
	NSString* _viewAllText;
	NSString* _uuid;
	int _megaphoneType;
	int _bannerIndicatorType;

}

@property (nonatomic,copy,readonly) NSString * title;                    //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * viewAllText;              //@synthesize viewAllText=_viewAllText - In the implementation block
@property (nonatomic,copy,readonly) NSString * uuid;                     //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,readonly) char isDismissable;                       //@synthesize isDismissable=_isDismissable - In the implementation block
@property (nonatomic,readonly) char shouldRefill;                        //@synthesize shouldRefill=_shouldRefill - In the implementation block
@property (nonatomic,readonly) int megaphoneType;                        //@synthesize megaphoneType=_megaphoneType - In the implementation block
@property (nonatomic,readonly) int bannerIndicatorType;                  //@synthesize bannerIndicatorType=_bannerIndicatorType - In the implementation block
-(int)bannerIndicatorType;
-(int)megaphoneType;
-(NSString *)viewAllText;
-(char)shouldRefill;
-(id)initWithTitle:(id)arg1 viewAllText:(id)arg2 isDismissable:(char)arg3 shouldRefill:(char)arg4 displayNewUnit:(char)arg5 uuid:(id)arg6 ;
-(id)init;
-(NSString *)title;
-(NSString *)uuid;
-(char)isDismissable;
@end

