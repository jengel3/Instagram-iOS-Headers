

@protocol IGExperimentManagerProvider <NSObject>
@required
-(id)deviceExperimentSet;
-(id)currentUserSessionExperimentSet;
-(id)allExperimentSpecs;

@end

