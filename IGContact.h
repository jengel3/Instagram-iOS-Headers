

@class NSString, NSArray;

@interface IGContact : NSObject {

	NSString* _firstName;
	NSString* _lastName;
	NSArray* _phoneNumbers;
	NSArray* _emailAddresses;

}

@property (nonatomic,copy) NSString * firstName;                    //@synthesize firstName=_firstName - In the implementation block
@property (nonatomic,copy) NSString * lastName;                     //@synthesize lastName=_lastName - In the implementation block
@property (nonatomic,retain) NSArray * phoneNumbers;                //@synthesize phoneNumbers=_phoneNumbers - In the implementation block
@property (nonatomic,retain) NSArray * emailAddresses;              //@synthesize emailAddresses=_emailAddresses - In the implementation block
-(id)initWithContactRef:(void*)arg1 ;
-(void)setPhoneNumbers:(NSArray *)arg1 ;
-(NSArray *)emailAddresses;
-(NSString *)firstName;
-(NSString *)lastName;
-(id)description;
-(void)setEmailAddresses:(NSArray *)arg1 ;
-(id)asDictionary;
-(NSArray *)phoneNumbers;
-(void)setFirstName:(NSString *)arg1 ;
-(void)setLastName:(NSString *)arg1 ;
@end

