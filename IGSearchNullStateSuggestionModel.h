
#import <Instagram/IGDKDiffable.h>

@class NSArray, NSString;

@interface IGSearchNullStateSuggestionModel : NSObject <IGDKDiffable> {

	NSArray* _users;
	NSString* _diffIdentifier;

}

@property (nonatomic,readonly) NSArray * users;                      //@synthesize users=_users - In the implementation block
@property (nonatomic,retain) NSString * diffIdentifier;              //@synthesize diffIdentifier=_diffIdentifier - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)diffIdentifier;
-(id)initWithUsers:(id)arg1 ;
-(void)setDiffIdentifier:(NSString *)arg1 ;
-(char)isEqual:(id)arg1 ;
-(NSArray *)users;
@end

