
#import <Instagram/IGExpiringMediaPosting.h>
#import <libobjc.A.dylib/NSCoding.h>

@class IGUser, IGDate, IGPhoto, IGVideo, NSString;

@interface IGExpiredFeedItem : NSObject <IGExpiringMediaPosting, NSCoding> {

	IGUser* _user;
	IGDate* _expiringAtDate;
	IGDate* _takenAtDate;
	int _mediaType;
	IGPhoto* _photo;
	IGVideo* _video;

}

@property (readonly) IGUser * user;                                 //@synthesize user=_user - In the implementation block
@property (readonly) IGDate * expiringAtDate;                       //@synthesize expiringAtDate=_expiringAtDate - In the implementation block
@property (readonly) IGDate * takenAtDate;                          //@synthesize takenAtDate=_takenAtDate - In the implementation block
@property (readonly) int mediaType;                                 //@synthesize mediaType=_mediaType - In the implementation block
@property (readonly) IGPhoto * photo;                               //@synthesize photo=_photo - In the implementation block
@property (readonly) IGVideo * video;                               //@synthesize video=_video - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(IGDate *)takenAtDate;
-(IGDate *)expiringAtDate;
-(id)initWithUser:(id)arg1 expiringAtDate:(id)arg2 ;
-(IGUser *)user;
-(int)mediaType;
-(IGPhoto *)photo;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)description;
-(id)initWithDictionary:(id)arg1 ;
-(IGVideo *)video;
@end

