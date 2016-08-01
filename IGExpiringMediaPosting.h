

@protocol IGExpiringMediaPosting <NSObject>
@required
-(id)takenAtDate;
-(id)expiringAtDate;
-(id)user;
-(int)mediaType;
-(id)photo;
-(id)video;

@end

