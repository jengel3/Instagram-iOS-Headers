

@class IGUser, NSDate, NSString;

@interface IGAlbumItemHeaderViewModel : NSObject {

	IGUser* _user;
	NSDate* _takenDate;
	NSString* _displayName;
	NSString* _timeText;
	NSString* _timeAccessibilityText;

}

@property (nonatomic,readonly) IGUser * user;                                 //@synthesize user=_user - In the implementation block
@property (nonatomic,copy,readonly) NSDate * takenDate;                       //@synthesize takenDate=_takenDate - In the implementation block
@property (nonatomic,readonly) NSString * displayName;                        //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,readonly) NSString * timeText;                           //@synthesize timeText=_timeText - In the implementation block
@property (nonatomic,readonly) NSString * timeAccessibilityText;              //@synthesize timeAccessibilityText=_timeAccessibilityText - In the implementation block
-(id)initWithUser:(id)arg1 takenDate:(id)arg2 isNux:(char)arg3 ;
-(NSDate *)takenDate;
-(NSString *)timeText;
-(NSString *)timeAccessibilityText;
-(IGUser *)user;
-(NSString *)displayName;
@end

