
#import <libobjc.A.dylib/NSCoding.h>

@class NSOrderedSet;

@interface IGPostCollaboration : NSObject <NSCoding> {

	NSOrderedSet* _pendingCollaborativeUsers;
	NSOrderedSet* _acceptedCollaborativeUsers;

}

@property (nonatomic,readonly) NSOrderedSet * pendingCollaborativeUsers;               //@synthesize pendingCollaborativeUsers=_pendingCollaborativeUsers - In the implementation block
@property (nonatomic,readonly) NSOrderedSet * acceptedCollaborativeUsers;              //@synthesize acceptedCollaborativeUsers=_acceptedCollaborativeUsers - In the implementation block
-(id)usersFromArray:(id)arg1 ;
-(NSOrderedSet *)pendingCollaborativeUsers;
-(NSOrderedSet *)acceptedCollaborativeUsers;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
@end

