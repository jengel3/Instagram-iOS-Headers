
#import <libobjc.A.dylib/NSCoding.h>

@class IGUser;

@interface IGAuthUserData : NSObject <NSCoding> {

	IGUser* _user;
	double _timeLastAccessed;

}

@property (assign,nonatomic) double timeLastAccessed;              //@synthesize timeLastAccessed=_timeLastAccessed - In the implementation block
@property (nonatomic,retain) IGUser * user;                        //@synthesize user=_user - In the implementation block
-(double)timeLastAccessed;
-(id)initWithUser:(id)arg1 timeLastAccessed:(double)arg2 ;
-(void)setTimeLastAccessed:(double)arg1 ;
-(IGUser *)user;
-(void)setUser:(IGUser *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
@end

