

@class NSString, NSNumber;

@interface IGUserPublicLocation : NSObject {

	NSString* _streetAddress;
	NSString* _city;
	NSString* _state;
	NSString* _country;
	NSString* _zipCode;
	NSNumber* _latitude;
	NSNumber* _longitude;

}

@property (nonatomic,copy) NSString * streetAddress;              //@synthesize streetAddress=_streetAddress - In the implementation block
@property (nonatomic,copy) NSString * city;                       //@synthesize city=_city - In the implementation block
@property (nonatomic,copy) NSString * state;                      //@synthesize state=_state - In the implementation block
@property (nonatomic,copy) NSString * country;                    //@synthesize country=_country - In the implementation block
@property (nonatomic,copy) NSString * zipCode;                    //@synthesize zipCode=_zipCode - In the implementation block
@property (nonatomic,retain) NSNumber * latitude;                 //@synthesize latitude=_latitude - In the implementation block
@property (nonatomic,retain) NSNumber * longitude;                //@synthesize longitude=_longitude - In the implementation block
+(id)addressStringForDisplayWithStreet:(id)arg1 city:(id)arg2 state:(id)arg3 country:(id)arg4 ;
-(NSString *)streetAddress;
-(void)setStreetAddress:(NSString *)arg1 ;
-(id)toDictForUpdate;
-(NSString *)zipCode;
-(void)setZipCode:(NSString *)arg1 ;
-(NSString *)city;
-(NSNumber *)latitude;
-(NSNumber *)longitude;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)state;
-(void)setState:(NSString *)arg1 ;
-(NSString *)country;
-(void)setCountry:(NSString *)arg1 ;
-(void)setLatitude:(NSNumber *)arg1 ;
-(void)setLongitude:(NSNumber *)arg1 ;
-(void)setCity:(NSString *)arg1 ;
@end

